//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GKDatabaseConnection, NSString;

@interface GKDelayedSetPhotoCacheWriter : NSObject
{
    GKDatabaseConnection *_connection;	// 8 = 0x8
}

+ (id)writerWithDatabaseConnection:(id)arg1;	// IMP=0x00200000000d247d
- (void).cxx_destruct;	// IMP=0x00200000000d3681
@property(retain, nonatomic) GKDatabaseConnection *connection; // @synthesize connection=_connection;
- (void)writeResources:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000d2b38
- (void)writeToDatabase:(struct sqlite3 *)arg1 statementStore:(id)arg2 withInsertSQL:(id)arg3 updateSQL:(id)arg4 bindOperation:(CDUnknownBlockType)arg5;	// IMP=0x00100000000d27ab
- (void)bindParametersForGetOldPhotosStatement:(struct sqlite3_stmt *)arg1 playerID:(id)arg2;	// IMP=0x00100000000d2793
- (id)getOldPhotosSQL;	// IMP=0x00100000000d276a
- (void)bindParametersForDeleteOldPhotosStatement:(struct sqlite3_stmt *)arg1 requestsRowID:(long long)arg2;	// IMP=0x00100000000d2753
- (id)deleteOldPhotosSQL;	// IMP=0x00100000000d272a
- (void)bindParametersForPhotoStatement:(struct sqlite3_stmt *)arg1 photo:(id)arg2 avatarType:(id)arg3 requestsRowID:(long long)arg4;	// IMP=0x00100000000d2684
- (id)photosInsertSQL;	// IMP=0x00100000000d2649
- (void)bindParametersForRequestsStatement:(struct sqlite3_stmt *)arg1 playerID:(id)arg2;	// IMP=0x00100000000d25ac
- (id)requestsInsertSQL;	// IMP=0x00100000000d257c
@property(readonly, nonatomic) GKDatabaseConnection *databaseConnection;
- (id)initWithDatabaseConnection:(id)arg1;	// IMP=0x00100000000d24da

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

