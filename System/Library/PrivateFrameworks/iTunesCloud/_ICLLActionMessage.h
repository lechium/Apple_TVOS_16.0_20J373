//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, _ICLLAddQueueItemsAction, _ICLLClientInfoAction, _ICLLCurrentItemChangeAction, _ICLLCurrentItemTransitionAction, _ICLLDisplayMessage, _ICLLMoveQueueItemAction, _ICLLParticipantChangeAction, _ICLLPlayNowQueueItemsAction, _ICLLPlaybackSyncAction, _ICLLQueueSyncAction, _ICLLReactionAction, _ICLLRemoveQueueItemAction, _ICLLReplaceQueueItemsAction, _ICLLServerNoticeAction;

__attribute__((visibility("hidden")))
@interface _ICLLActionMessage : PBCodable
{
    long long _originatorId;	// 8 = 0x8
    int _action;	// 16 = 0x10
    _ICLLAddQueueItemsAction *_addItems;	// 24 = 0x18
    _ICLLClientInfoAction *_clientInfo;	// 32 = 0x20
    _ICLLCurrentItemChangeAction *_currentItemChange;	// 40 = 0x28
    _ICLLCurrentItemTransitionAction *_currentItemTransition;	// 48 = 0x30
    _ICLLDisplayMessage *_displayMessage;	// 56 = 0x38
    _ICLLMoveQueueItemAction *_moveItem;	// 64 = 0x40
    NSString *_originatorUUID;	// 72 = 0x48
    _ICLLParticipantChangeAction *_participantChange;	// 80 = 0x50
    _ICLLPlayNowQueueItemsAction *_playNowQueueItems;	// 88 = 0x58
    _ICLLPlaybackSyncAction *_playbackSync;	// 96 = 0x60
    _ICLLQueueSyncAction *_queueSync;	// 104 = 0x68
    _ICLLReactionAction *_reaction;	// 112 = 0x70
    _ICLLRemoveQueueItemAction *_removeItem;	// 120 = 0x78
    _ICLLReplaceQueueItemsAction *_replaceQueueItems;	// 128 = 0x80
    _ICLLServerNoticeAction *_serverNotice;	// 136 = 0x88
    _Bool _displayNotice;	// 144 = 0x90
    struct {
        unsigned int originatorId:1;
        unsigned int action:1;
        unsigned int displayNotice:1;
    } _has;	// 148 = 0x94
}

- (void).cxx_destruct;	// IMP=0x000000000003cbc1
- (unsigned long long)hash;	// IMP=0x000000000003c9a6
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003c5a8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003c28d
- (void)writeTo:(id)arg1;	// IMP=0x000000000003c069
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000003c05c
- (id)dictionaryRepresentation;	// IMP=0x000000000003bac0
- (id)description;	// IMP=0x000000000003ba11

@end

