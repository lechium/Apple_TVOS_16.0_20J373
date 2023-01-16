//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IKUpdateServiceRequest, IKViewElement, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface VUIAppDocumentManualUpdateContext : NSObject
{
    IKUpdateServiceRequest *_currentUpdateRequest;	// 8 = 0x8
    NSDictionary *_contextDictionary;	// 16 = 0x10
    IKViewElement *_viewElement;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000004570
@property(nonatomic) __weak IKViewElement *viewElement; // @synthesize viewElement=_viewElement;
@property(retain, nonatomic) NSDictionary *contextDictionary; // @synthesize contextDictionary=_contextDictionary;
@property(retain, nonatomic) IKUpdateServiceRequest *currentUpdateRequest; // @synthesize currentUpdateRequest=_currentUpdateRequest;
- (void)updateCurrentUpdateRequestWithAppContext:(id)arg1 documentRef:(id)arg2;	// IMP=0x00000000000043b3
- (void)updateRequestCompletedWithViewElements:(id)arg1 documentRef:(id)arg2;	// IMP=0x00000000000043ad
- (id)initWithContextDictionary:(id)arg1 viewElement:(id)arg2;	// IMP=0x0000000000004314
- (id)init;	// IMP=0x00000000000042a5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

