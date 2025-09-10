import './cal.css';

function Cal() {
    const handleButtonClick = (value) => {
        document.querySelector('input').value += value;
    }
    const handleCalculate = () => {
        var ans = eval(document.querySelector('input').value);
        document.querySelector('input').value = ans;
    }
    const clearInput = () => {
        document.querySelector('input').value = "";
    }
    const backSpace = () => {
        var str = document.querySelector('input').value;
        str = str.slice(0, -1);
        document.querySelector('input').value = str;
    }
    return (
        <>
            <div className="d-flex justify-content-center align-items-center vh-100">
                <div class="card" style={{ width: "18rem" }}>
                    <div class="card-body">
                        <div className="row">
                            <div className="col">
                                <input type="tel" className="form-control" />
                            </div>
                            <div className="col-3 btn bt" onClick={() => backSpace()}>
                                <svg viewBox="-7 -2 30 20" fill="none" xmlns="http://www.w3.org/2000/svg"><g id="SVGRepo_bgCarrier" stroke-width="0"></g><g id="SVGRepo_tracerCarrier" stroke-linecap="round" stroke-linejoin="round"></g><g id="SVGRepo_iconCarrier"> <path d="M4.5 12.5L4.10957 12.8123C4.20445 12.931 4.34811 13 4.5 13V12.5ZM0.5 7.5L0.109566 7.18765C-0.0365219 7.37026 -0.0365219 7.62974 0.109566 7.81235L0.5 7.5ZM4.5 2.5V2C4.34811 2 4.20445 2.06904 4.10957 2.18765L4.5 2.5ZM14 3.5V11.5H15V3.5H14ZM13.5 12H4.5V13H13.5V12ZM4.89043 12.1877L0.890434 7.18765L0.109566 7.81235L4.10957 12.8123L4.89043 12.1877ZM0.890434 7.81235L4.89043 2.81235L4.10957 2.18765L0.109566 7.18765L0.890434 7.81235ZM4.5 3H13.5V2H4.5V3ZM14 11.5C14 11.7761 13.7761 12 13.5 12V13C14.3284 13 15 12.3284 15 11.5H14ZM15 3.5C15 2.67157 14.3284 2 13.5 2V3C13.7761 3 14 3.22386 14 3.5H15ZM6.14645 5.85355L10.1464 9.85355L10.8536 9.14645L6.85355 5.14645L6.14645 5.85355ZM10.1464 5.14645L6.14645 9.14645L6.85355 9.85355L10.8536 5.85355L10.1464 5.14645Z" fill="#000000"></path> </g></svg>
                            </div>
                            <div className="col-3 btn bt" onClick={() => clearInput()}>C</div>
                        </div>
                        <div className="row">
                            <div className="col btn bt" onClick={() => handleButtonClick("7")}>7</div>
                            <div className="col btn bt" onClick={() => handleButtonClick("8")}>8</div>
                            <div className="col btn bt" onClick={() => handleButtonClick("9")}>9</div>
                            <div className="col btn bt" onClick={() => handleButtonClick("/")}>/</div>
                        </div>
                        <div className="row">
                            <div className="col btn bt" onClick={() => handleButtonClick("4")}>4</div>
                            <div className="col btn bt" onClick={() => handleButtonClick("5")}>5</div>
                            <div className="col btn bt" onClick={() => handleButtonClick("6")}>6</div>
                            <div className="col btn bt" onClick={() => handleButtonClick("*")}>*</div>
                        </div>
                        <div className="row">
                            <div className="col btn bt" onClick={() => handleButtonClick("1")}>1</div>
                            <div className="col btn bt" onClick={() => handleButtonClick("2")}>2</div>
                            <div className="col btn bt" onClick={() => handleButtonClick("3")}>3</div>
                            <div className="col btn bt" onClick={() => handleButtonClick("-")}>-</div>
                        </div>
                        <div className="row">
                            <div className="col btn bt" onClick={() => handleButtonClick("0")}>0</div>
                            <div className="col btn bt" onClick={() => handleButtonClick(".")}>.</div>
                            <div className="col btn bt" onClick={() => handleCalculate("=")}>=</div>
                            <div className="col btn bt" onClick={() => handleButtonClick("+")}>+</div>
                        </div>
                    </div>
                </div>
            </div>
        </>
    );
}
export default Cal;