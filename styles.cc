/* Общие стили */
* {
  margin: 0;
  padding: 0;
  box-sizing: border-box;
}
body {
  font-family: Arial, sans-serif;
  background: #F8F8F8;
  color: #333;
  text-align: center;
}

/* Навигационное меню */
nav {
  background: #63A70A; /* Фирменный зеленый */
  padding: 15px;
  position: fixed;
  width: 100%;
  top: 0;
  left: 0;
  z-index: 10;
}
nav ul {
  list-style-type: none;
  padding: 0;
  margin: 0;
  text-align: center;
}
nav ul li {
  display: inline-block;
  margin: 0 15px;
}
nav ul li a {
  text-decoration: none;
  color: white;
  font-size: 18px;
  font-weight: bold;
  padding: 10px;
  transition: color 0.3s ease;
}
nav ul li a:hover {
  color: #D4E157;
}

/* Заголовок */
.header {
  margin-top: 100px;  /* Отступ после меню */
  margin-bottom: 40px; /* Отступ от изображения */
  font-size: 42px;
  font-weight: 500;
  color: #666666;  /* Фирменный серый */
  font-family: "Helvetica", "Arial", sans-serif;
}

/* Фоновое изображение (hero) */
.hero {
  width: 100%;
  height: 100vh;
  background: url('images/main-photo.jpg') no-repeat center center/cover;
}

/* Раздел контактов */
.contacts {
  padding: 30px 5%;
  background: white;
  color: #666666;
  font-family: "Helvetica", "Arial", sans-serif;
  font-size: 16px;
  text-align: center;
}

.contacts h2 {
  font-size: 28px;
  margin-bottom: 20px;
}

/* Контейнер для контактов */
.contact-container {
  display: flex;
  justify-content: space-between;
  align-items: center;
  flex-wrap: wrap;
  max-width: 1200px;
  margin: 0 auto;
}

/* Контактные блоки */
.contact-block {
  flex: 1;
  text-align: center;
  min-width: 250px;
}

/* Соцсети */
.social-icons {
  display: flex;
  gap: 15px;
  justify-content: center;
}

.social-icons img {
  width: 35px;
  height: 35px;
  transition: transform 0.3s ease;
}

.social-icons img:hover {
  transform: scale(1.1);
}
