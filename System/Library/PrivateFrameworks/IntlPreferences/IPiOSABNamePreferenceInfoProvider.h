//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface IPiOSABNamePreferenceInfoProvider : NSObject
{
}

+ (id)canonicalKeyToValueIdentifierToNumericValueMap;	// IMP=0x0010000000009c68
+ (id)valueToValueIdentifierMapFromCanonicalKey:(id)arg1;	// IMP=0x0010000000009bc6
+ (id)valueIdentifierToValueMapFromCanonicalKey:(id)arg1;	// IMP=0x0010000000009b43
+ (id)canonicalNameToNativeKeyName;	// IMP=0x0010000000009a80
+ (id)nativeKeyNameToCanonicalKeyName;	// IMP=0x001000000000998b
+ (id)domain;	// IMP=0x001000000000997e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
