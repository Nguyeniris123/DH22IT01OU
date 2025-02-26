call get_questions(2);
call get_choices("480c2e87-73f7-489f-ba28-3996b760b422");
call count_prods_by_cate("");
call count_wrong_questions(@c);
select @c;

-- CREATE DEFINER=`root`@`localhost` PROCEDURE `get_questions`(IN num INT)
-- BEGIN
-- 	SELECT * FROM question
--     order by rand()
--     LIMIT num;
-- END

-- CREATE DEFINER=`root`@`localhost` PROCEDURE `count_prods_by_cate`(IN kw varchar(20))
-- BEGIN
-- 	SELECT C.id, C.name, count(Q.id) as 'quantity'
--     FROM category C left outer JOIN question Q ON Q.category_id=C.id
--     Where name like concat('%', kw, '%')
--     GROUP BY C.id;
-- END

-- CREATE DEFINER=`root`@`localhost` PROCEDURE `get_choices`(IN questionId VARCHAR(50))
-- BEGIN
-- 	SELECT * FROM choice WHERE question_id = questionId;
-- END

-- CREATE DEFINER=`root`@`localhost` PROCEDURE `count_wrong_questions`(OUT count INT)
-- BEGIN
-- 	SELECT COUNT(*) INTO count
-- 	FROM (
-- 		SELECT Q.id
-- 		FROM question Q INNER JOIN choice C ON C.question_id=Q.id
-- 		GROUP BY Q.id
-- 		HAVING count(C.id) < 4
--     ) AS SUBTABLE;
-- END

