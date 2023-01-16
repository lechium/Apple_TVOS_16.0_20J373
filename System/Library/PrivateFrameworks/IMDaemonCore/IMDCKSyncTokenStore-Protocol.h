//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMDaemonCore/NSObject-Protocol.h>

@class CKServerChangeToken, NSString;

@protocol IMDCKSyncTokenStore <NSObject>
- (void)persistToken:(CKServerChangeToken *)arg1 forKey:(NSString *)arg2;
- (CKServerChangeToken *)tokenForKey:(NSString *)arg1;
- (void)migrateKey:(NSString *)arg1 fromDatabase:(NSString *)arg2;
@end

