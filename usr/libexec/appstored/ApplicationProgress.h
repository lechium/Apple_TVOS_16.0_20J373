//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, NSURL, NSUUID;

@interface ApplicationProgress : NSObject
{
    _Bool _createPlaceholder;	// 8 = 0x8
    _Bool _reportRemotely;	// 9 = 0x9
    _Bool _update;	// 10 = 0xa
    NSURL *_artworkURL;	// 16 = 0x10
    NSString *_bundleID;	// 24 = 0x18
    NSUUID *;	// 32 = 0x20
    NSString *_logKey;	// 40 = 0x28
    NSString *_name;	// 48 = 0x30
    long long _status;	// 56 = 0x38
    NSNumber *_storeItemID;	// 64 = 0x40
    long long _watchApplicationMode;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0020000000169705
@property long long watchApplicationMode; // @synthesize watchApplicationMode=_watchApplicationMode;
@property(getter=isUpdate) _Bool update; // @synthesize update=_update;
@property(retain) NSNumber *storeItemID; // @synthesize storeItemID=_storeItemID;
@property long long status; // @synthesize status=_status;
@property _Bool reportRemotely; // @synthesize reportRemotely=_reportRemotely;
@property(retain) NSString *name; // @synthesize name=_name;
@property(retain) NSString *logKey; // @synthesize logKey=_logKey;
@property(retain) NSUUID *externalID; // @synthesize externalID=_externalID;
@property _Bool createPlaceholder; // @synthesize createPlaceholder=_createPlaceholder;
@property(retain) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain) NSURL *artworkURL; // @synthesize artworkURL=_artworkURL;

@end

