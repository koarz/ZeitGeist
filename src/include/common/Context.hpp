#pragma once

#include "common/DatabaseInstance.hpp"
#include "parser/SQLStatement.hpp"
#include "storage/disk/DiskManager.hpp"
#include <memory>

namespace DB {

struct QueryContext {
  std::shared_ptr<Database> database_;
  std::shared_ptr<DiskManager> disk_manager_;
  std::shared_ptr<SQLStatement> sql_statement_;

  QueryContext()
      : database_(std::make_shared<Database>()),
        disk_manager_(std::make_shared<DiskManager>()) {}
};
} // namespace DB