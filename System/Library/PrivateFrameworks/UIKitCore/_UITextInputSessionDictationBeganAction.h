//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UITextInputSessionDictationBeganAction
{
    unsigned long long _dictationBeganCount;	// 32 = 0x20
    unsigned long long _modelessUsedAtLeastOnceCount;	// 40 = 0x28
    unsigned long long _multiModalDictationBeganCount;	// 48 = 0x30
}

@property(nonatomic) unsigned long long multiModalDictationBeganCount; // @synthesize multiModalDictationBeganCount=_multiModalDictationBeganCount;
@property(nonatomic) unsigned long long modelessUsedAtLeastOnceCount; // @synthesize modelessUsedAtLeastOnceCount=_modelessUsedAtLeastOnceCount;
@property(nonatomic) unsigned long long dictationBeganCount; // @synthesize dictationBeganCount=_dictationBeganCount;
- (id)description;	// IMP=0x0000000000f0469e
- (long long)mergeActionIfPossible:(id)arg1;	// IMP=0x0000000000f04570

@end

