//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableString;

@interface _BKRuleResolutionTranscript : NSObject
{
    NSMutableString *_string;	// 8 = 0x8
    long long _indentLevel;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000001746d
- (id)build;	// IMP=0x001000000001744f
- (void)appendFailure:(id)arg1;	// IMP=0x00100000000173a4
- (void)appendResolution:(id)arg1;	// IMP=0x00100000000172f9
- (void)appendRejection:(id)arg1;	// IMP=0x001000000001724e
- (void)appendMatch:(id)arg1;	// IMP=0x00100000000171a3
- (void)appendSection:(id)arg1;	// IMP=0x00100000000170ec
- (void)appendItem:(id)arg1;	// IMP=0x0010000000017041
- (void)appendEnvironment:(id)arg1;	// IMP=0x0010000000016f96
- (void)_appendIndentedItemWithPrefix:(id)arg1 label:(id)arg2 args:(struct __va_list_tag [1])arg3;	// IMP=0x0010000000016f04
- (void)popSection;	// IMP=0x0010000000016d94
- (void)pushSection;	// IMP=0x0010000000016d8a
- (void)restoreSection:(id)arg1;	// IMP=0x0010000000016d66
- (id)saveSection;	// IMP=0x0010000000016d46
- (void)_appendIndent;	// IMP=0x0010000000016cf0
- (id)init;	// IMP=0x0010000000016c9a

@end

