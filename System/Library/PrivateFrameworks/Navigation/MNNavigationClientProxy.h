//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOApplicationAuditToken, MNDirectionsRequestManager;

__attribute__((visibility("hidden")))
@interface MNNavigationClientProxy : NSObject
{
    GEOApplicationAuditToken *_auditToken;	// 8 = 0x8
    MNDirectionsRequestManager *_directionsRequestManager;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000d7c44
- (id)_directionsRequestManager;	// IMP=0x00000000000d7c09
- (void)cancelDirectionsRequestWithIdentifier:(id)arg1;	// IMP=0x00000000000d7bf3
- (void)requestDirections:(id)arg1 withIdentifier:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000d7b52
- (id)init;	// IMP=0x00000000000d7a78

@end

