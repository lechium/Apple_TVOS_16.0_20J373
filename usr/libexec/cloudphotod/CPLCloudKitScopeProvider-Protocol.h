//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class CKRecordID, CKRecordZoneID, CPLCloudKitScope, CPLScopedIdentifier, NSString;

@protocol CPLCloudKitScopeProvider <NSObject>
- (CPLScopedIdentifier *)rejectedScopedIdentifierForRejectedCKRecordID:(CKRecordID *)arg1;
- (CPLScopedIdentifier *)scopedIdentifierForCKRecordID:(CKRecordID *)arg1;
- (NSString *)scopeIdentifierFromZoneID:(CKRecordZoneID *)arg1;
- (CKRecordZoneID *)zoneIDFromScopeIdentifier:(NSString *)arg1;
- (CPLCloudKitScope *)cloudKitScopeForScopeIdentifier:(NSString *)arg1;
@end
