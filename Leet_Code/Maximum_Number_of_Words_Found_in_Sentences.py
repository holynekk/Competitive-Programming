class Solution:
    def mostWordsFound(self, sentences: List[str]) -> int:
        max_value = 0
        for sentence in sentences:
            word_count = len(sentence.split())
            if word_count > max_value:
                max_value = word_count
        return max_value