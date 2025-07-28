##体が使えなくなってしまうまで、役と一緒に生きたい。
##想和角色一起活下去，直到身体不能动为止。----A&G NEXT STEP 羊宫妃那のHOOOOPE 第1回
import time
import cProfile

def main():
    start_time = time.time()

    n, m, k, scores = get_input()
    m_scores, k_score = process_data(n, m, k, scores)
    output = calculate_output(m_scores, k_score)
    print(output)

    end_time = time.time()
    print(f"Execution time: {end_time - start_time} seconds")

def get_input():
    n = int(input("please enter how many songs you qiyan has "))
    m = int(input("please enter how many songs you qiyan will sing "))

    while True:
        k = int(input("please enter how many songs you qiyan wants to show,please enter 0 or 1 "))
        if k == 0 or k == 1:
            break
        else:
            print("Invalid input. Please enter 0 or 1.")

    scores = []
    for i in range(n):
        score = int(input(f"Please enter the score for song {i+1}: "))
        scores.append(score)

    return n, m, k, scores


def process_data(n, m, k , scores):
    sorted_scores = sorted(scores, reverse=True)
    m_scores = sorted_scores[:m]

    k_scores = sorted_scores[:k]
    if k_scores:
        highest_score = k_scores[0]
    else:
        highest_score = 0
    k_score = 10**5 - highest_score
    return m_scores, k_score

def calculate_output(m_scores, k_score):
    output = sum(m_scores) + k_score
    return output

if __name__ == "__main__":
    main()
