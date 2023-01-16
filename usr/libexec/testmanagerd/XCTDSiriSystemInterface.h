//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol XCTDSiriAnalytics, XCTDSiriPreferences;

@interface XCTDSiriSystemInterface : NSObject
{
}

@property(readonly) CDUnknownFunctionPointerType recognitionStringsFunc;
@property(readonly) CDUnknownFunctionPointerType audioInputPathsFunc;
- (id)newConnection;	// IMP=0x001000000002bb02
@property(readonly) id <XCTDSiriAnalytics> analytics;
@property(readonly) id <XCTDSiriPreferences> preferences;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
