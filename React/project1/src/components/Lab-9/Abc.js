import { use, useEffect, useState } from 'react';
import { useNavigate } from 'react-router-dom';


function Abc() {
    const [data, setData] = useState([]);
    const navigate = useNavigate();

    useEffect(() => {
        fetch('https://68c8f5beceef5a150f62e664.mockapi.io/students')
            .then((res) => (res.json()))
            .then((res) => setData(res));
    }, []);

    const goPage = (id) => {
        navigate(`/student/${id}`);
    }

    return (
        <>
            {
                data.map((stu) => {
                    return (
                        <tr>
                            <th scope="col">{stu.id}</th>
                            <td scope="col">{stu.name}</td>
                            <td scope="col">
                                <img src={stu.avatar} alt="Avatar" width="50" height="50"/>
                            </td>
                            <td><button className='btn btn-primary' onClick={() => {goPage(stu.id)}}>Read more...</button></td>
                        </tr>
                    );
                }
                )
            }
        </>
    );
}

export default Abc;