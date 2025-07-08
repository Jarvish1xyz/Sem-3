function append(value) {
      const display = document.getElementById("display");
      display.value += value;
    }

    function clearDisplay() {
      document.getElementById("display").value = "";
    }

    function backspace() {
      const display = document.getElementById("display");
      display.value = display.value.slice(0, -1);
    }

    function calculate() {
      const display = document.getElementById("display");
      let expression = display.value;

      // Replace function names with JavaScript equivalents
      expression = expression.replace(/sin\(/g, 'Math.sin(');
      expression = expression.replace(/cos\(/g, 'Math.cos(');
      expression = expression.replace(/tan\(/g, 'Math.tan(');
      expression = expression.replace(/log\(/g, 'Math.log10(');
      expression = expression.replace(/sqrt\(/g, 'Math.sqrt(');
      expression = expression.replace(/exp\(/g, 'Math.exp(');
      expression = expression.replace(/π/g, 'Math.PI');

      try {
        display.value = eval(expression);
      } catch {
        display.value = "Error";
      }
    }
