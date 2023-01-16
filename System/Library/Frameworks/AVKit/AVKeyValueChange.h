//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AVKeyValueChange : NSObject
{
    id _value;	// 8 = 0x8
    id _oldValue;	// 16 = 0x10
    NSString *_keyPath;	// 24 = 0x18
    id _observationToken;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001149e3
@property(readonly, nonatomic) id observationToken; // @synthesize observationToken=_observationToken;
@property(readonly, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(readonly, nonatomic) id oldValue; // @synthesize oldValue=_oldValue;
@property(readonly, nonatomic) id value; // @synthesize value=_value;
- (id)initWithValue:(id)arg1 oldValue:(id)arg2 keyPath:(id)arg3 observationToken:(id)arg4;	// IMP=0x0000000000114861

@end

