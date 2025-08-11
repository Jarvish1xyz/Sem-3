import '../style/Image.css';
import Find from './Find';

function Image() {
    return (
        <>
        <div>
            <div className='fimage'>
                <div className='fline d-flex justify-content-center align-items-center'>
                    <span className='ftext'>Book your ride on your comfort</span>
                </div>
            </div>
            <Find/>
        </div>
        </>
    );
}

export default Image;