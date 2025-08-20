function C({name}) {
    var isClicked=true;

    function handleClick() {
        isClicked = !isClicked;
    }

    return(
        <>

            <button type="button" className="btn btn-outline-primary btn-lg" onClick={handleClick}>Click to show</button>
            

            {isClicked && <p>Button was clicked!</p>}





































            <div className="container">
                <div className="row">
                    <div className="col">
                        <div className="card" style={{ width: '18rem' }}>
                            <img src="https://images.pexels.com/photos/17888840/pexels-photo-17888840.jpeg" className="card-img-top" alt="..." />
                            <div className="card-body">
                                <h5 className="card-title">{name}</h5>
                                <p className="card-text">Some quick example text to build on the card title and make up the bulk of the card’s content.</p>
                                <a href="https://images.pexels.com/photos/17888840/pexels-photo-17888840.jpeg" className="btn btn-primary">Go somewhere</a>
                                </div>
                        </div>
                    </div>
                    <div className="col">
                        <div className="card" style={{ width: '18rem' }}>
                            <img src="https://images.pexels.com/photos/17888840/pexels-photo-17888840.jpeg" className="card-img-top" alt="..." />
                            <div className="card-body">
                                <h5 className="card-title">{name}</h5>
                                <p className="card-text">Some quick example text to build on the card title and make up the bulk of the card’s content.</p>
                                <a href="https://images.pexels.com/photos/17888840/pexels-photo-17888840.jpeg" className="btn btn-primary">Go somewhere</a>
                                </div>
                        </div>
                    </div>
                    <div className="col">
                        <div className="card" style={{ width: '18rem' }}>
                            <img src="https://images.pexels.com/photos/17888840/pexels-photo-17888840.jpeg" className="card-img-top" alt="..." />
                            <div className="card-body">
                                <h5 className="card-title">{name}</h5>
                                <p className="card-text">Some quick example text to build on the card title and make up the bulk of the card’s content.</p>
                                <a href="https://images.pexels.com/photos/17888840/pexels-photo-17888840.jpeg" className="btn btn-primary">Go somewhere</a>
                                </div>
                        </div>
                    </div>
                </div>
            </div>
        </>
        
    );
}

export default C;