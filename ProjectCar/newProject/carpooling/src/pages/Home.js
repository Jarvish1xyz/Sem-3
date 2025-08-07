import Navbar from '../components/Navbar';

function Home() {
    return (
        <>
        <Navbar/>
            <div className="card" style={{width: '18rem'}}>
                <img src="https://images.pexels.com/photos/17888840/pexels-photo-17888840.jpeg" className="card-img-top" alt="..."/>
                    <div className="card-body">
                        <h5 className="card-title">Card title</h5>
                        <p className="card-text">Some quick example text to build on the card title and make up the bulk of the card’s content.</p>
                        <a href="https://www.pexels.com/photo/a-blue-bmw-m5-parked-on-a-street-at-night-17888840/" target='blank' className="btn btn-primary">Go somewhere</a>
                    </div>
            </div>
        </>
    );
}

export default Home;