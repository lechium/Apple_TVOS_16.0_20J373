//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol VOTElementManagementProtocol;

@interface VOTDebugManager : NSObject
{
    id <VOTElementManagementProtocol> _elementManager;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x0040000000114e2f
- (void).cxx_destruct;	// IMP=0x0020000000114f0f
@property(retain, nonatomic) id <VOTElementManagementProtocol> elementManager; // @synthesize elementManager=_elementManager;
- (void)dealloc;	// IMP=0x0010000000114eb3
- (id)init;	// IMP=0x0010000000114e84

@end
