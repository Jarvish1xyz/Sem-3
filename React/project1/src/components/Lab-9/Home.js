import Abc from './Abc';


function Home() {
    

    return (
        <>
            <table className="table">
                <thead>
                    <tr>
                    <th scope="col">Id</th>
                    <th scope="col">Name</th>
                    <th scope="col">Avtar</th>
                    <th scope="col">Handle</th>
                    </tr>
                </thead>
                <tbody>
                    <Abc/>
                </tbody>
            </table>
        </>
    );
}

export default Home;