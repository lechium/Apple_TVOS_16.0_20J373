//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IDSTransactionQueueTransaction : NSObject
{
    _Bool _readyToExecute;	// 8 = 0x8
    id _item;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000002e78b
@property(retain, nonatomic) id item; // @synthesize item=_item;
@property(nonatomic) _Bool readyToExecute; // @synthesize readyToExecute=_readyToExecute;
- (id)initWithItem:(id)arg1 readyToExecute:(_Bool)arg2;	// IMP=0x000000000002e6e8
- (id)initWithItem:(id)arg1;	// IMP=0x000000000002e6d1

@end

