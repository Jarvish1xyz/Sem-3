import { useEffect, useState } from 'react';


function Home() {
    const [data, setData] = useState([]);

    useEffect(() => {
        fetch('https://68c8f5beceef5a150f62e664.mockapi.io/students')
            .then((res) => (res.json()))
            .then((res) => setData(res));
    }, []);

    const getChapterRows = () => {
        const rows = [];
        for (let i = 0; i < data.length; i += 2) {
            rows.push(data.slice(i, i + 2));
        }
        return rows;
    };

    return (
        <>
            <table className="table">
                <thead>
                    <tr>
                        <th scope="col">Id</th>
                        <th scope="col">Name</th>
                        <th scope="col">Avtar</th>
                    </tr>
                </thead>
                <tbody>
            {getChapterRows().map((pair) => (
                    {
                        pair.map((stu) => {
                            return (
                                <tr>
                                    <th scope="col">{stu.id}</th>
                                    <td scope="col">{stu.name}</td>
                                    <td scope="col">
                                        <img src={stu.avatar} alt="Avatar" width="50" height="50"/>
                                    </td>
                                </tr>
                            );
                        })
                    }
                ))}
                </tbody>
            </table>
        </>
    );

    // return (
    //     <>

    //         {/* {
    //             data.map((stu) => {
    //                 return (
    //                     <table className="table">
    //                         <thead>
    //                             <tr>
    //                             <th scope="col">Id</th>
    //                             <th scope="col">Name</th>
    //                             <th scope="col">Avtar</th>
    //                             <th scope="col">Handle</th>
    //                             </tr>
    //                         </thead>
    //                         <tbody>
    //                             <tr>
    //                                 <th scope="col">{stu.id}</th>
    //                                 <td scope="col">{stu.name}</td>
    //                                 <td scope="col">
    //                                     <img src={stu.avatar} alt="Avatar" width="50" height="50"/>
    //                                 </td>
    //                             </tr>
    //                         </tbody>
    //                     </table>
    //                 );
    //             }
    //             )
    //         } */}
    //     </>
    // );
}

export default Home;