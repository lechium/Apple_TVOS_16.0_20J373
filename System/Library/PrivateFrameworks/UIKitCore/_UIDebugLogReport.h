//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _UIDebugLogReport : NSObject
{
    unsigned long long _currentIndentLevel;	// 8 = 0x8
    CDUnknownBlockType _fallbackMessagePrefixHandler;	// 16 = 0x10
    NSMutableArray *_statements;	// 24 = 0x18
    NSMutableArray *_prefixStack;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000005ff2ab
@property(retain, nonatomic, getter=_prefixStack) NSMutableArray *prefixStack; // @synthesize prefixStack=_prefixStack;
@property(retain, nonatomic, getter=_statements) NSMutableArray *statements; // @synthesize statements=_statements;
@property(copy, nonatomic) CDUnknownBlockType fallbackMessagePrefixHandler; // @synthesize fallbackMessagePrefixHandler=_fallbackMessagePrefixHandler;
@property(nonatomic) unsigned long long currentIndentLevel; // @synthesize currentIndentLevel=_currentIndentLevel;
- (void)decrementIndentLevelAndPopMessagePrefix;	// IMP=0x00000000005ff224
- (void)incrementIndentLevelAndPushMessagePrefix:(id)arg1;	// IMP=0x00000000005ff1d2
- (id)_messagePrefixAtIndentLevel:(unsigned long long)arg1;	// IMP=0x00000000005ff055
- (void)clearAllMessagePrefixes;	// IMP=0x00000000005ff018
- (void)popMessagePrefix;	// IMP=0x00000000005fefdb
- (void)pushMessagePrefixHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000005feeec
- (void)pushMessagePrefix:(id)arg1;	// IMP=0x00000000005fee0e
- (void)resetIndentLevel;	// IMP=0x00000000005feda1
- (void)decrementIndentLevel;	// IMP=0x00000000005fed6f
- (void)incrementIndentLevel;	// IMP=0x00000000005fed3d
- (void)addLineBreak;	// IMP=0x00000000005fecc2
- (void)addMessage:(id)arg1;	// IMP=0x00000000005feb4e
- (void)addMessageWithFormat:(id)arg1;	// IMP=0x00000000005fe9cb
@property(readonly, nonatomic) unsigned long long messageCount;
- (id)init;	// IMP=0x00000000005fe912

@end

