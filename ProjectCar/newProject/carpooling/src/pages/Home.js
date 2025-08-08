import '../style/Home.css';
import Navbar from '../components/Navbar';
import Image from '../components/Image';

function Home() {
    return (
        <>
        <Navbar/>
        <div className='mainBody'>
            <Image/>
        </div>
        </>
    );
}

export default Home;