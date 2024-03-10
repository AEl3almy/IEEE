def find_first_last(nums, target):

        first_occurrence = -1
        last_occurrence = -1

        # Iterate through the list
        for i, num in enumerate(nums):
            if num == target:
                if first_occurrence == -1:
                    first_occurrence = i
                last_occurrence = i

        # Return the result
        return [first_occurrence, last_occurrence]
def sort (list) :
    list.sort()
    print(list)

