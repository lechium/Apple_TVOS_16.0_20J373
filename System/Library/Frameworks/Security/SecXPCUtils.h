//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SecXPCUtils : NSObject
{
}

+ (struct __CFString *)copyApplicationIdentifier;	// IMP=0x00800000000165a7
+ (struct __CFString *)copyApplicationIdentifierFromConnection:(id)arg1;	// IMP=0x00800000000164d1
+ (struct __CFString *)copyApplicationIdentifierFromSelf;	// IMP=0x0080000000016438
+ (struct __CFString *)copySigningIdentifier:(id)arg1;	// IMP=0x0080000000016351
+ (_Bool)clientCanEditPreferenceOwnership;	// IMP=0x0080000000016213

@end
