import { Col1, Col2 } from './Col';


function Contant() {
    return (
        <>
            <div className="h3 bg-primary-subtle text-danger text-center">The contant is hear.</div>
            <div class="container text-center">
                <div class="row m-3">
                    <Col1/>
                    <Col2/>
                    <Col1/>
                </div>
                <div class="row m-3">
                    <Col2/>
                    <Col1/>
                    <Col2/>
                </div>
            </div>
        </>
    );
}

export default Contant;