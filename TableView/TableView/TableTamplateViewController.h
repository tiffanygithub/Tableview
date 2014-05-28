//
//  TableTamplateViewController.h
//  TableView
//
//  Created by tiffany  on 2014/5/26.
//  Copyright (c) 2014年 appscomb. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TableTamplateViewController : UIViewController<UITableViewDataSource,UITableViewDelegate>
{
   UITableView *tableview;
   NSMutableArray *dataSource;

}
@property(nonatomic,retain) NSMutableArray *dataSource;
@property (retain,nonatomic) UITableView *tableview;

@end
