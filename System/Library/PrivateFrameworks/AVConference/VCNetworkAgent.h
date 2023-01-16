//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCNetworkAgent : NSObject
{
    int _assertionRefCount;	// 8 = 0x8
}

+ (id)agentFromData:(id)arg1;	// IMP=0x0060000000300e61
+ (id)agentType;	// IMP=0x0060000000300e54
+ (id)agentDomain;	// IMP=0x0060000000300e47
+ (id)sharedInstance;	// IMP=0x0060000000300d48
- (id)copyAgentData;	// IMP=0x0000000000300e69
- (int)getNetworkAgentRefCount;	// IMP=0x0000000000300e3f
- (_Bool)addMediaInformationAssertion:(id)arg1;	// IMP=0x0000000000300e37
- (_Bool)clearMediaInformationAssertion;	// IMP=0x0000000000300e2f
- (unsigned long long)textStringLength:(id)arg1;	// IMP=0x0000000000300e15
- (const char *)textString:(id)arg1;	// IMP=0x0000000000300e00
- (void)removeAssertion;	// IMP=0x0000000000300dfa
- (void)addAssertion;	// IMP=0x0000000000300df4
- (void)dealloc;	// IMP=0x0000000000300da2
- (id)init;	// IMP=0x0000000000300d50

@end
