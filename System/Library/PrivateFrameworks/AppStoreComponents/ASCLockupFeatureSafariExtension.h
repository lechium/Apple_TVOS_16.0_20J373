//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ASCLockupFeatureSafariExtension : NSObject
{
    NSString *_contentProviderTeamID;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000001ab7e
- (void).cxx_destruct;	// IMP=0x000000000001aec5
@property(readonly, copy, nonatomic) NSString *contentProviderTeamID; // @synthesize contentProviderTeamID=_contentProviderTeamID;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001ad12
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001ac8c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001ac13
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001ab86
- (id)initWithContentProviderTeamID:(id)arg1;	// IMP=0x000000000001ab0b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

