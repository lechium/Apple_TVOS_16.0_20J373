//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableView.h>

@interface UITableView (VideosUI)
+ (id)_vui_indexPathsWithIndexSet:(id)arg1 andSection:(unsigned long long)arg2;	// IMP=0x00800000000c2fe6
- (void)_vui_applyUpdateChanges:(id)arg1 inSection:(unsigned long long)arg2 rowAnimation:(long long)arg3;	// IMP=0x00100000000c2ce5
- (void)_vui_applyMoveChanges:(id)arg1 inSection:(unsigned long long)arg2 rowAnimation:(long long)arg3;	// IMP=0x00100000000c29f3
- (void)_vui_applyInsertChange:(id)arg1 inSection:(unsigned long long)arg2 rowAnimation:(long long)arg3;	// IMP=0x00100000000c28d7
- (void)_vui_applyDeleteChange:(id)arg1 inSection:(unsigned long long)arg2 rowAnimation:(long long)arg3;	// IMP=0x00100000000c2738
- (void)vui_applyChangeSet:(id)arg1 inSection:(unsigned long long)arg2 rowAnimation:(long long)arg3 updateDataSourceBlock:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000c2459
- (void)vui_applyChangeSet:(id)arg1 inSection:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000c2431
- (void)vui_applyChangeSet:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000c241a
@end
