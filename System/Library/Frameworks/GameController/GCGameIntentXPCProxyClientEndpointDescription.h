//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GCGameIntentXPCProxyClientEndpoint, NSString;
@protocol NSObject><NSCopying><NSSecureCoding;

__attribute__((visibility("hidden")))
@interface GCGameIntentXPCProxyClientEndpointDescription : NSObject
{
    GCGameIntentXPCProxyClientEndpoint *_materializedObject;	// 8 = 0x8
    id <NSObject><NSCopying><NSSecureCoding> _identifier;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000009aac5
- (void).cxx_destruct;	// IMP=0x000000000009af23
@property(readonly) id <NSObject><NSCopying><NSSecureCoding> identifier; // @synthesize identifier=_identifier;
- (id)materializeWithContext:(id)arg1;	// IMP=0x000000000009ac2f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000009ac0c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000009ab65
- (id)init;	// IMP=0x000000000009ab42
- (id)initWithIdentifier:(id)arg1;	// IMP=0x000000000009aacd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

