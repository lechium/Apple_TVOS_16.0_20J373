//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class AceObject, NSData, NSDictionary, NSString, PBCodable, SFCommand, VRXInstrumentationEvent;
@protocol SAAceCommand;

@protocol VRXInteractionDelegate <NSObject>

@optional
- (void)restartSpeechSynthesis;
- (void)cancelSpeechSynthesis;
- (void)emitInstrumentationEvent:(VRXInstrumentationEvent *)arg1;
- (void)emitInstrumentationEvent:(PBCodable *)arg1 requiresNewTurn:(_Bool)arg2;
- (void)didEndEditing;
- (void)willBeginEditing;
- (void)sharedStateDidUpdate:(NSDictionary *)arg1;
- (void)performNextSnippetWithMachineUtterance:(NSString *)arg1;
- (void)performNextSnippetWithResponseData:(NSData *)arg1;
- (void)navigateWithSFCommand:(SFCommand *)arg1;
- (void)navigateWithAceCommand:(AceObject<SAAceCommand> *)arg1;
- (void)navigateWithResponseData:(NSData *)arg1;
- (void)performShowResponse:(NSData *)arg1;
- (void)performSFCommand:(SFCommand *)arg1;
- (void)performAceCommand:(AceObject<SAAceCommand> *)arg1;
- (void)informHostOfViewResize:(struct CGSize)arg1;
@end

