//
//  Card.h
//  CardMatchingGame
//
//  Created by 7 on 14-3-7.
//  Copyright (c) 2014年 7. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Card : NSObject

@property (strong,nonatomic) NSString *contents;

@property (nonatomic,getter = isChosen)BOOL chosen;
@property (nonatomic,getter = isMatched)BOOL matched;

- (int)match:(NSArray *)otherCards;

@end
