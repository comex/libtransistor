#pragma once

#include<libtransistor/types.h>
#include<libtransistor/fs/inode.h>
#include<libtransistor/ipc/fs/ifilesystem.h>

// Takes ownership of the ifilesystem. Will close it automatically on release.
result_t trn_fspfs_create(trn_inode_t *out, ifilesystem_t fs);
