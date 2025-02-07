/* Общие стили */
* {
  margin: 0;
  padding: 0;
  box-sizing: border-box;
}
body {
  font-family: "Helvetica", "Arial", sans-serif; /* Шрифт из логотипа */
  background: #F8F8F8;
  color: #666666; /* Серый цвет из логотипа */
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
  display: flex;
  justify-content: center;
  gap: 25px;
}
nav ul li {
  display: inline;
}
nav ul li a {
  text-decoration: none;
  color: #666666; /* Серый цвет логотипа */
  font-family: "Helvetica", "Arial", sans-serif;
  font-size: 18px;
  font-weight: bold;
  padding: 10px;
  transition: color 0.3s ease;
}
nav ul li a:hover {
  color: white;
}

/* Заголовок */
.header {
  margin-top: 120px;  /* Увеличенный отступ от меню */
  margin-bottom: 40px; /* Отступ от изображения */
  font-size: 42px;
  font-weight: 500;
  color: #666666;  /* Фирменный серый */
  font-family: "Helvetica", "Arial", sans-serif;
}

/* Основное изображение */
.hero img {
  width: 100%;
  height: auto;
  display: block;
  margin: 0 auto;
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
