SRCS= 			main.c \
					$(COMMON_SRCS)

TEST=			test_main.c \
					$(COMMON_SRCS)

COMMON_SRCS = 	$(NODE_SRCS) \
					$(DEQUE_SRCS) \
					$(PS_SRCS) \
					$(UTILS_SRCS) \
					$(SORTS_SRCS) \
					$(INPUT_MANAGER_SRCS)

NODE_SRCS = node/node.c

DEQUE_SRCS = deque/deque_common_operations.c \
				deque/deque_manage.c \
				deque/deque_push_swap_op.c \
				deque/deque_more_operations.c

PS_SRCS = push_swap_operations/ps_manage.c \
			push_swap_operations/ps_operations_r.c \
			push_swap_operations/ps_operations_rr.c \
			push_swap_operations/ps_operations_s_p.c

UTILS_SRCS = utils/utils.c \
				utils/quick_sort.c \
				utils/ft_split.c \
				utils/utils2.c

INPUT_MANAGER_SRCS = input_manager/parse_input.c

SORTS_SRCS = sorts/radix.c \
				sorts/sort5.c \
				sorts/sort4.c \
				sorts/sort3.c