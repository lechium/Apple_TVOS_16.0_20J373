//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SSXPCServerObserver : NSObject
{
    id _observer;	// 8 = 0x8
    SEL _selector;	// 16 = 0x10
}

@property(nonatomic) SEL selector; // @synthesize selector=_selector;
@property(nonatomic) id observer; // @synthesize observer=_observer;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000d1571
- (unsigned long long)hash;	// IMP=0x00000000000d155b

@end

