//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, SYDDaemonToClientConnection, SYDStoreID, SYDSyncManager;

@protocol SYDDaemonToClientConnectionDelegate
- (NSArray *)allStoreIdentifiersWithError:(id *)arg1;
- (void)processAccountChanges;
- (SYDSyncManager *)connection:(SYDDaemonToClientConnection *)arg1 syncManagerForStoreID:(SYDStoreID *)arg2;
- (void)connectionDidInvalidate:(SYDDaemonToClientConnection *)arg1;
@end

