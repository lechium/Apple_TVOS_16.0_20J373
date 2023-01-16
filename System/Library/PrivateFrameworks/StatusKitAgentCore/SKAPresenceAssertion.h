//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_os_activity;

__attribute__((visibility("hidden")))
@interface SKAPresenceAssertion : NSObject
{
    NSString *_presenceIdentifier;	// 8 = 0x8
    NSObject<OS_os_activity> *_osActivity;	// 16 = 0x10
}

+ (id)logger;	// IMP=0x006000000000c9cd
- (void).cxx_destruct;	// IMP=0x000000000000ca3d
@property(readonly, nonatomic) NSObject<OS_os_activity> *osActivity; // @synthesize osActivity=_osActivity;
@property(readonly, copy, nonatomic) NSString *presenceIdentifier; // @synthesize presenceIdentifier=_presenceIdentifier;
- (void)dealloc;	// IMP=0x000000000000c952
- (unsigned long long)hash;	// IMP=0x000000000000c90e
- (_Bool)isEqualToPresenceAssertion:(id)arg1;	// IMP=0x000000000000c85c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000c7ff
- (id)description;	// IMP=0x000000000000c777
- (id)initWithPresenceIdentifier:(id)arg1;	// IMP=0x000000000000c68e

@end
