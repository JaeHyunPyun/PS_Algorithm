-- 코드를 입력하세요
SELECT ANIMAL_TYPE, CASE 
    WHEN NAME is not NULL THEN NAME
    ELSE 'No name'
END NAME
, SEX_UPON_INTAKE FROM ANIMAL_INS;