//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AXElement, PBSiriScreenActionApplication;
@protocol PBSiriScreenActionManagerDelegate;

@interface PBSiriScreenActionManager : NSObject
{
    _Bool _enabled;	// 8 = 0x8
    id <PBSiriScreenActionManagerDelegate> _delegate;	// 16 = 0x10
    CDUnknownBlockType _systemApplicationElementProvider;	// 24 = 0x18
    AXElement *_systemApplicationElement;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000187398
@property(retain, nonatomic) AXElement *systemApplicationElement; // @synthesize systemApplicationElement=_systemApplicationElement;
@property(readonly, nonatomic) CDUnknownBlockType systemApplicationElementProvider; // @synthesize systemApplicationElementProvider=_systemApplicationElementProvider;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) __weak id <PBSiriScreenActionManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) AXElement *currentApplicationElement;
@property(readonly, nonatomic) PBSiriScreenActionApplication *currentScreenActionApplication;
- (id)initWithSystemApplicationElementProvider:(CDUnknownBlockType)arg1;	// IMP=0x0010000000186ff1
- (id)init;	// IMP=0x0010000000186fd7

@end

