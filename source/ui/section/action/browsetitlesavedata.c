#include <3ds.h>

#include "action.h"
#include "../section.h"
#include "../task/uitask.h"
#include "../../list.h"
#include "../../../core/util.h"

void action_browse_title_save_data(linked_list* items, list_item* selected) {
    title_info* info = (title_info*) selected->data;

    u32 path[3] = {info->mediaType, (u32) (info->titleId & 0xFFFFFFFF), (u32) ((info->titleId >> 32) & 0xFFFFFFFF)};
    files_open(ARCHIVE_USER_SAVEDATA, util_make_binary_path(path, sizeof(path)));
}