//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKRecordZoneID, MISSING_TYPE, NSError, NSString;

@interface CPLCKPhotosSharedLibraryExitResponse : NSObject
{
    MISSING_TYPE *participantUserID;	// 8 = 0x8
    MISSING_TYPE *stagingZoneID;	// 24 = 0x18
    MISSING_TYPE *error;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x004000000019b5d0
- (id)init;	// IMP=0x001000000019b560
@property(nonatomic, copy) NSError *error;
@property(nonatomic, retain) CKRecordZoneID *stagingZoneID; // @synthesize stagingZoneID;
@property(nonatomic, copy) NSString *participantUserID;

@end

