//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface CSDConversationPersistenceController : NSObject
{
    MISSING_TYPE *queue;	// 8 = 0x8
    MISSING_TYPE *storage;	// 16 = 0x10
    MISSING_TYPE *lockStateObserver;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00400000002a51a0
- (id)init;	// IMP=0x00100000002a5140
- (void)enumerateActiveConversations:(CDUnknownBlockType)arg1;	// IMP=0x00100000002a3fa0
- (void)removeAllConversations;	// IMP=0x00100000002a2070
- (void)removeConversation:(id)arg1;	// IMP=0x00100000002a1bb0
- (void)updateConversation:(id)arg1;	// IMP=0x00100000002a1550
- (id)initWithQueue:(id)arg1;	// IMP=0x00100000002a0df0

@end

