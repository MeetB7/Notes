const scene = new THREE.Scene();
const camera = new THREE.PerspectiveCamera(75, window.innerWidth / window.innerHeight, 0.1, 1000);
const renderer = new THREE.WebGLRenderer();

renderer.setSize(window.innerWidth, window.innerHeight);
document.body.appendChild(renderer.domElement);

const geometry = new THREE.BufferGeometry();
const material = new THREE.PointsMaterial({ color: 0xffffff });

const strasvertices = [];
for (let i = 0; i < 1000; i++) {
    const x = (Math.random() - 0.5) * 2000;
    const y = (Math.random() - 0.5) * 2000;
    const z = (Math.random() - 0.5) * 2000;
    strasvertices.push(x, y, z);
}

geometry.setAttribute('position', new THREE.Float32BufferAttribute(strasvertices, 3));
const stars = new THREE.Points(geometry, material);
scene.add(stars);

camera.position.z = 5;

const animate = () => {
    requestAnimationFrame(animate);

    stars.rotation.x += 0.0001;
    stars.rotation.y += 0.001;

    renderer.render(scene, camera);
};

animate();
document.addEventListener('mousemove', (event) => {
    const mouseX = (event.clientX / window.innerWidth) * 2 - 1;
    const mouseY = -(event.clientY / window.innerHeight) * 2 + 1;

    stars.position.x = mouseX * 10;
    stars.position.y = mouseY * 10;
})
const onWindowResize = () => {
    camera.aspect = window.innerWidth / window.innerHeight;
    camera.updateProjectionMatrix();
    renderer.setSize(window.innerWidth, window.innerHeight);
};

window.addEventListener('resize', onWindowResize);