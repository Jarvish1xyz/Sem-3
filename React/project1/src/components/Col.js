function Col1() {
    return (
        <>
            <div class="col gy-3">
                <div class="card" style={{ width: '18rem' }}>
                    <img src="https://images.pexels.com/photos/17888840/pexels-photo-17888840.jpeg" class="card-img-top" alt="Image" />
                    <div class="card-body">
                        <h5 class="card-title">Card title</h5>
                        <p class="card-text">Some quick example text to build on the card title and make up the bulk of the card’s content.</p>
                        <a href="https://www.pexels.com/photo/a-blue-bmw-m5-parked-on-a-street-at-night-17888840/" target="_blank" class="btn btn-primary">Go somewhere</a>
                    </div>
                </div>
            </div>
        </>
    );
}

function Col2() {
    return (
        <>
            <div class="col gy-3">
                <div class="card" style={{ width: '18rem' }}>
                    <img src="https://images.pexels.com/photos/3752169/pexels-photo-3752169.jpeg" class="card-img-top" alt="Image" />
                    <div class="card-body">
                        <h5 class="card-title">Card title</h5>
                        <p class="card-text">Some quick example text to build on the card title and make up the bulk of the card’s content.</p>
                        <a href="https://www.pexels.com/photo/gray-lamborghini-on-road-3752169/" target="_blank" class="btn btn-primary">Go somewhere</a>
                    </div>
                </div>
            </div>
        </>
    );
}

export { Col1, Col2};