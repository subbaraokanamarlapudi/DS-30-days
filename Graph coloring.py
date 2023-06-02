colors = ['Yellow', 'Green', 'Violet', 'Black', 'Navy Blue']
states = ['AP', 'TN', 'KA', 'KL']
print("The colored states are: ")
nbr = {}

nbr['AP'] = ['KA', 'TN']
nbr['TN'] = ['AP', 'KA', 'KL']
nbr['KA'] = ['AP', 'TN', 'KL']
nbr['KL'] = ['KA', 'TN']

colors_of_states = {}


def graph_color(state, color):
    for neighbor in nbr.get(state):
        color_of_neighbor = colors_of_states.get(neighbor)
        if color_of_neighbor == color:
            return False

    return True


def get_color_of_state(state):
    for color in colors:
        if graph_color(state, color):
            return color

    return None


def main():
    for state in states:
        colors_of_states[state] = get_color_of_state(state)
    print(colors_of_states)


main()


# # BY TAKING USER INPUT VALUES.

# states = input("Enter the states : ").split(',')
# colors = input("Enter the colors : ").split(',')
# nbr = {}

# for state in states:
#     nbr[state] = input(f"Enter the neighbors of {state} (comma-separated): ").split(',')

# colors_of_states = {}


# def graph_color(state, color):
#     for neighbor in nbr.get(state):
#         color_of_neighbor = colors_of_states.get(neighbor)

#         if color_of_neighbor == color:
#             return False

#     return True


# def get_color_of_state(state):
#     for color in colors:
#         if graph_color(state, color):
#             return color

#     return None


# def main():
#     for state in states:
#         colors_of_states[state] = get_color_of_state(state)
#     print(colors_of_states)


# main()
