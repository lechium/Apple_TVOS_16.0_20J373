//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSPersistentStore.h>

@interface NSPersistentStore (HomeKitDaemon)
- (id)hmd_tombstonesForEntity:(id)arg1 duration:(double)arg2 context:(id)arg3 error:(id *)arg4;	// IMP=0x007000000033c140
- (id)hmd_deletedModelIDsForEntity:(id)arg1 modelIDKey:(id)arg2 duration:(double)arg3 context:(id)arg4;	// IMP=0x007000000033bf26
- (_Bool)hmd_modelWasDeletedWithID:(id)arg1 modelIDKey:(id)arg2 entity:(id)arg3 duration:(double)arg4 context:(id)arg5;	// IMP=0x007000000033bc66
@end

