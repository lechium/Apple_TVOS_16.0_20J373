//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class CKRecordZoneID, NSError, NSString;

@protocol CPLCKPhotosSharedLibraryExitResponse <NSObject>
@property(nonatomic, copy) NSError *error;
@property(nonatomic, copy) CKRecordZoneID *stagingZoneID;
@property(nonatomic, copy) NSString *participantUserID;
@end

