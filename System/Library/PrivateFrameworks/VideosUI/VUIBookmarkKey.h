//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VUIBookmarkKey : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    long long _keyType;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000005ec02
@property(readonly, nonatomic) long long keyType; // @synthesize keyType=_keyType;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)description;	// IMP=0x000000000005eb64
- (id)init;	// IMP=0x000000000005eb22
- (id)initWithIdentifier:(id)arg1 keyType:(long long)arg2;	// IMP=0x000000000005ea7d

@end

